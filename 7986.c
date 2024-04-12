void fun()
{
  int entity_2 = 2;
  char* entity_6;
  char* entity_5;
  char entity_4[37] = "";
  entity_4 = NULL;
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[entity_2-1]='';
  entity_6 = (char*)malloc(7*sizeof(char));
  entity_6[7-1]='';
  memset(entity_4, 'i', 37-1);
  entity_4[37-1]='';
  entity_2 = 31;
  memcpy(entity_5, entity_4, 37*sizeof(char));
}