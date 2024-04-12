void fun()
{
  int entity_4 = 78;
  char entity_1[83] = "";
  entity_1 = NULL;
  char entity_0[16] = "";
  entity_0 = NULL;
  char* entity_9;
  char* entity_6;
  memset(entity_1, 'g', 83-1);
  entity_1[83-1]='';
  memset(entity_0, 'r', 16-1);
  entity_0[16-1]='';
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[entity_4-1]='';
  entity_9 = (char*)malloc(38*sizeof(char));
  entity_9[38-1]='';
  memcpy(entity_6, entity_0, 16*sizeof(char));
}