void fun()
{
  int entity_2 = 3;
  char* entity_1;
  char entity_4 = 'Q';
  char* entity_7;
  char entity_8[entity_2] = "";
  entity_8 = NULL;
  char* entity_0;
  entity_1 = (char*)malloc(67*sizeof(char));
  entity_1[67-1]='';
  entity_7 = (char*)malloc(33*sizeof(char));
  entity_7[33-1]='';
  entity_0 = (char*)malloc(69*sizeof(char));
  entity_0[69-1]='';
  memset(entity_8, 'f', entity_2-1);
  entity_8[entity_2-1]='';
  memcpy(entity_0, entity_8, entity_2*sizeof(char));
}