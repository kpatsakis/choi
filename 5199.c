void fun()
{
  int entity_6 = 36;
  char* entity_8;
  char* entity_5;
  char entity_4[21] = "";
  entity_4 = NULL;
  char* entity_2;
  entity_8 = (char*)malloc(69*sizeof(char));
  entity_8[69-1]='';
  memset(entity_4, 'B', 21-1);
  entity_4[21-1]='';
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[entity_6-1]='';
  entity_5 = (char*)malloc(64*sizeof(char));
  entity_5[64-1]='';
  memcpy(entity_2, entity_4, 21*sizeof(char));
}