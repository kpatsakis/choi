void fun()
{
  char entity_6 = 'Q';
  char* entity_2;
  char entity_5[47] = "";
  entity_5 = NULL;
  memset(entity_5, 'D', 47-1);
  entity_5[47-1]='';
  entity_2 = (char*)malloc(89*sizeof(char));
  entity_2[89-1]='';
  memcpy(entity_2, entity_5, 47*sizeof(char));
}