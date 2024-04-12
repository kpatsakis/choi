void fun()
{
  int entity_3 = 57;
  int entity_9 = 33;
  entity_9 = 50;
  char entity_8[3] = "";
  entity_8 = NULL;
  char* entity_5;
  memset(entity_8, 'Y', 3-1);
  entity_8[3-1]='';
  entity_5 = (char*)malloc(entity_9*sizeof(char));
  entity_5[entity_9-1]='';
  memcpy(entity_5, entity_8, 3*sizeof(char));
}