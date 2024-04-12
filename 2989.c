void fun()
{
  int entity_2 = 92;
  entity_2 = 47;
  char* entity_5;
  char* entity_8;
  char entity_4[2] = "";
  entity_4 = NULL;
  char entity_0 = 'Q';
  memset(entity_4, 'j', 2-1);
  entity_4[2-1]='';
  entity_8 = (char*)malloc(63*sizeof(char));
  entity_8[63-1]='';
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[entity_2-1]='';
  memcpy(entity_5, entity_4, 2*sizeof(char));
}