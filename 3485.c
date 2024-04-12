void fun()
{
  int entity_9 = 45;
  entity_9 = 24;
  char entity_2[99] = "";
  entity_2 = NULL;
  char entity_8[37] = "";
  entity_8 = NULL;
  char* entity_6;
  memset(entity_2, 'B', 99-1);
  entity_2[99-1]='';
  memset(entity_8, 'g', 37-1);
  entity_8[37-1]='';
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[entity_9-1]='';
  memcpy(entity_6, entity_8, 37*sizeof(char));
}