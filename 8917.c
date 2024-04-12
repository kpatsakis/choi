void fun()
{
  int entity_5 = 8;
  int entity_7 = 58;
  int entity_9 = 70;
  char* entity_3;
  char* entity_0;
  char entity_6[40] = "";
  entity_6 = NULL;
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  memset(entity_6, 'u', 40-1);
  entity_6[40-1]='';
  entity_0 = (char*)malloc(32*sizeof(char));
  entity_0[32-1]='';
  entity_9 = 50;
  strcpy(entity_3, entity_6);
}