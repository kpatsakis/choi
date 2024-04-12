void fun()
{
  int entity_9 = 64;
  int entity_0 = 57;
  int entity_7 = 60;
  entity_7 = 33;
  char* entity_2;
  char entity_4[61] = "";
  entity_4 = NULL;
  memset(entity_4, 'w', 61-1);
  entity_4[61-1]='';
  entity_2 = (char*)malloc(entity_7*sizeof(char));
  entity_2[entity_7-1]='';
  strcpy(entity_2, entity_4);
}