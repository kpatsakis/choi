void fun()
{
  int entity_2 = 81;
  entity_2 = 63;
  char entity_3 = 'o';
  char* entity_7;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  entity_7 = (char*)malloc(45*sizeof(char));
  entity_7[45-1]='';
  memset(entity_4, 'q', entity_2-1);
  entity_4[entity_2-1]='';
  memcpy(entity_7, entity_4, entity_2*sizeof(char));
}