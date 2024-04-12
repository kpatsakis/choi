void fun()
{
  int entity_6 = 80;
  char entity_7 = 'g';
  char* entity_0;
  char entity_1[99] = "";
  entity_1 = NULL;
  memset(entity_1, 'y', 99-1);
  entity_1[99-1]='';
  entity_0 = (char*)malloc(entity_6*sizeof(char));
  entity_0[entity_6-1]='';
  entity_6 = 28;
  memcpy(entity_0, entity_1, 99*sizeof(char));
}