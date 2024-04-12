void fun()
{
  int entity_4 = 70;
  entity_4 = 70;
  char entity_2 = 'r';
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  char* entity_6;
  memset(entity_3, 'O', entity_4-1);
  entity_3[entity_4-1]='';
  entity_6 = (char*)malloc(13*sizeof(char));
  entity_6[13-1]='';
  strcpy(entity_6, entity_3);
}