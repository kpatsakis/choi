void fun()
{
  int entity_2 = 51;
  char entity_7[52] = "";
  entity_7 = NULL;
  char* entity_8;
  char* entity_1;
  char entity_3[67] = "";
  entity_3 = NULL;
  char entity_6[entity_2] = "";
  entity_6 = NULL;
  memset(entity_3, 'C', 67-1);
  entity_3[67-1]='';
  entity_1 = (char*)malloc(52*sizeof(char));
  entity_1[52-1]='';
  memset(entity_6, 'p', entity_2-1);
  entity_6[entity_2-1]='';
  memset(entity_7, 'P', 52-1);
  entity_7[52-1]='';
  entity_8 = (char*)malloc(72*sizeof(char));
  entity_8[72-1]='';
  memcpy(entity_1, entity_6, entity_2*sizeof(char));
}