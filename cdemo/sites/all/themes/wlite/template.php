<?php

function phptemplate_comment_wrapper($content, $node) {
	if (!$content || $node->type == 'forum') {
		return '<div id="comments">'. $content .'</div>';
	}
	else {
		return '<h2 class="comments">'. t('Comments') .'</h2>' . '<div id="comments">' . $content .'</div>';
	}
}
