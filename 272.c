void fun()
{
  int entity_5 = 73;
  int entity_6 = 96;
  char entity_7[2] = "";
  entity_7 = NULL;
  char* entity_2;
  char* entity_4;
  memset(entity_7, 'I', 2-1);
  entity_7[2-1]='';
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[entity_5-1]='';
  entity_4 = (char*)malloc(75*sizeof(char));
  entity_4[75-1]='';
  entity_5 = 75;
  memcpy(entity_2, entity_7, 2*sizeof(char));
}