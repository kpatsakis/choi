void fun()
{
  int entity_3 = 2;
  int entity_2 = 66;
  char* entity_7;
  char entity_4[95] = "";
  entity_4 = NULL;
  entity_7 = (char*)malloc(entity_2*sizeof(char));
  entity_7[entity_2-1]='';
  memset(entity_4, 'R', 95-1);
  entity_4[95-1]='';
  entity_2 = 79;
  memcpy(entity_7, entity_4, 95*sizeof(char));
}