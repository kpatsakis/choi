void fun()
{
  char entity_7[67] = "";
  entity_7 = NULL;
  char* entity_4;
  char* entity_3;
  char entity_1[63] = "";
  entity_1 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(85*sizeof(char));
  entity_0[85-1]='';
  entity_4 = (char*)malloc(72*sizeof(char));
  entity_4[72-1]='';
  memset(entity_1, 'B', 63-1);
  entity_1[63-1]='';
  memset(entity_7, 'Z', 67-1);
  entity_7[67-1]='';
  entity_3 = (char*)malloc(95*sizeof(char));
  entity_3[95-1]='';
  memcpy(entity_4, entity_7, 67*sizeof(char));
}