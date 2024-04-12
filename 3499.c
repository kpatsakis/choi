void fun()
{
  int entity_2 = 91;
  entity_2 = 2;
  char* entity_3;
  char entity_1[59] = "";
  entity_1 = NULL;
  char* entity_4;
  char entity_5 = 'v';
  entity_3 = (char*)malloc(entity_2*sizeof(char));
  entity_3[entity_2-1]='';
  memset(entity_1, 'L', 59-1);
  entity_1[59-1]='';
  entity_4 = (char*)malloc(36*sizeof(char));
  entity_4[36-1]='';
  memcpy(entity_3, entity_1, 59*sizeof(char));
}