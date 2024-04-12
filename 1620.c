void fun()
{
  int entity_1 = 18;
  char entity_8[entity_1] = "";
  entity_8 = NULL;
  char* entity_4;
  char* entity_2;
  entity_2 = (char*)malloc(44*sizeof(char));
  entity_2[44-1]='';
  entity_4 = (char*)malloc(86*sizeof(char));
  entity_4[86-1]='';
  memset(entity_8, 'C', entity_1-1);
  entity_8[entity_1-1]='';
  memcpy(entity_4, entity_8, entity_1*sizeof(char));
}