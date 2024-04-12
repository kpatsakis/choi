void fun()
{
  int entity_5 = 70;
  char* entity_4;
  char* entity_0;
  char* entity_6;
  char entity_8[31] = "";
  entity_8 = NULL;
  char entity_2[53] = "";
  entity_2 = NULL;
  entity_6 = (char*)malloc(27*sizeof(char));
  entity_6[27-1]='';
  entity_4 = (char*)malloc(34*sizeof(char));
  entity_4[34-1]='';
  memset(entity_8, 'c', 31-1);
  entity_8[31-1]='';
  memset(entity_2, 'C', 53-1);
  entity_2[53-1]='';
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[entity_5-1]='';
  memcpy(entity_0, entity_2, 53*sizeof(char));
}