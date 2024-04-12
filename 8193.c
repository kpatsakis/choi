void fun()
{
  int entity_8 = 3;
  char* entity_4;
  char entity_1[87] = "";
  entity_1 = NULL;
  char* entity_5;
  char entity_2 = 'b';
  entity_5 = (char*)malloc(15*sizeof(char));
  entity_5[15-1]='';
  memset(entity_1, 't', 87-1);
  entity_1[87-1]='';
  entity_4 = (char*)malloc(entity_8*sizeof(char));
  entity_4[entity_8-1]='';
  entity_8 = 37;
  memcpy(entity_4, entity_1, 87*sizeof(char));
}