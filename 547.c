void fun()
{
  int entity_4 = 100;
  char* entity_9;
  char entity_8[44] = "";
  entity_8 = NULL;
  char* entity_2;
  entity_9 = (char*)malloc(entity_4*sizeof(char));
  entity_9[entity_4-1]='';
  memset(entity_8, 'g', 44-1);
  entity_8[44-1]='';
  entity_2 = (char*)malloc(59*sizeof(char));
  entity_2[59-1]='';
  entity_4 = 58;
  memcpy(entity_9, entity_8, 44*sizeof(char));
}