void fun()
{
  int entity_5 = 89;
  char* entity_7;
  char entity_3[82] = "";
  entity_3 = NULL;
  memset(entity_3, 'p', 82-1);
  entity_3[82-1]='';
  entity_7 = (char*)malloc(entity_5*sizeof(char));
  entity_7[entity_5-1]='';
  strcpy(entity_7, entity_3);
}