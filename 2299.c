void fun()
{
  int entity_0 = 88;
  char entity_4[entity_0] = "";
  entity_4 = NULL;
  char* entity_3;
  char* entity_8;
  char entity_2[42] = "";
  entity_2 = NULL;
  entity_8 = (char*)malloc(87*sizeof(char));
  entity_8[87-1]='';
  memset(entity_4, 'j', entity_0-1);
  entity_4[entity_0-1]='';
  entity_3 = (char*)malloc(31*sizeof(char));
  entity_3[31-1]='';
  memset(entity_2, 'W', 42-1);
  entity_2[42-1]='';
  memcpy(entity_8, entity_4, entity_0*sizeof(char));
}