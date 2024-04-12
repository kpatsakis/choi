void fun()
{
  int entity_6 = 46;
  char entity_1[1] = "";
  entity_1 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(62*sizeof(char));
  entity_7[62-1]='';
  memset(entity_1, 'J', 1-1);
  entity_1[1-1]='';
  strcpy(entity_7, entity_1);
}