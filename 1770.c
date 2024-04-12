void fun()
{
  int entity_1 = 50;
  char* entity_8;
  char* entity_4;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(37*sizeof(char));
  entity_5[37-1]='';
  entity_8 = (char*)malloc(15*sizeof(char));
  entity_8[15-1]='';
  entity_4 = (char*)malloc(3*sizeof(char));
  entity_4[3-1]='';
  memset(entity_2, 'Z', entity_1-1);
  entity_2[entity_1-1]='';
  memcpy(entity_8, entity_2, entity_1*sizeof(char));
}