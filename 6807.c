void fun()
{
  int entity_5 = 89;
  char entity_6[2] = "";
  entity_6 = NULL;
  char* entity_3;
  char entity_7 = 'd';
  memset(entity_6, 'P', 2-1);
  entity_6[2-1]='';
  entity_3 = (char*)malloc(13*sizeof(char));
  entity_3[13-1]='';
  strcpy(entity_3, entity_6);
}