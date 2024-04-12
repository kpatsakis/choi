void fun()
{
  int entity_0 = 94;
  entity_0 = 8;
  char* entity_7;
  char entity_2[92] = "";
  entity_2 = NULL;
  memset(entity_2, 'm', 92-1);
  entity_2[92-1]='';
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  strcpy(entity_7, entity_2);
}