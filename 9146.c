void fun()
{
  int entity_3 = 16;
  char entity_1[53] = "";
  entity_1 = NULL;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  char* entity_4;
  char* entity_8;
  entity_8 = (char*)malloc(94*sizeof(char));
  entity_8[94-1]='';
  entity_4 = (char*)malloc(11*sizeof(char));
  entity_4[11-1]='';
  memset(entity_6, 'z', entity_3-1);
  entity_6[entity_3-1]='';
  memset(entity_1, 'k', 53-1);
  entity_1[53-1]='';
  memcpy(entity_4, entity_6, entity_3*sizeof(char));
}