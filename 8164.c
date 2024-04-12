void fun()
{
  int entity_1 = 57;
  int entity_0 = 14;
  int entity_9 = 90;
  char* entity_3;
  char entity_5[63] = "";
  entity_5 = NULL;
  memset(entity_5, 'd', 63-1);
  entity_5[63-1]='';
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  entity_9 = 7;
  strcpy(entity_3, entity_5);
}