void fun()
{
  int entity_2 = 95;
  int entity_5 = 60;
  entity_5 = 85;
  char entity_8[89] = "";
  entity_8 = NULL;
  char* entity_3;
  char* entity_4;
  memset(entity_8, 'I', 89-1);
  entity_8[89-1]='';
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[entity_5-1]='';
  entity_3 = (char*)malloc(62*sizeof(char));
  entity_3[62-1]='';
  memcpy(entity_4, entity_8, 89*sizeof(char));
}