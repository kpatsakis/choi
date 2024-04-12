void fun()
{
  int entity_4 = 16;
  char* entity_5;
  char* entity_1;
  char entity_3[55] = "";
  entity_3 = NULL;
  entity_5 = (char*)malloc(48*sizeof(char));
  entity_5[48-1]='';
  memset(entity_3, 'u', 55-1);
  entity_3[55-1]='';
  entity_1 = (char*)malloc(14*sizeof(char));
  entity_1[14-1]='';
  memcpy(entity_5, entity_3, 55*sizeof(char));
}