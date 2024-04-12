void fun()
{
  int entity_2 = 56;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  char* entity_8;
  char* entity_5;
  memset(entity_4, 'q', entity_2-1);
  entity_4[entity_2-1]='';
  entity_8 = (char*)malloc(22*sizeof(char));
  entity_8[22-1]='';
  entity_5 = (char*)malloc(62*sizeof(char));
  entity_5[62-1]='';
  memcpy(entity_5, entity_4, entity_2*sizeof(char));
}