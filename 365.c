void fun()
{
  int entity_5 = 26;
  char* entity_2;
  char* entity_8;
  char entity_7[entity_5] = "";
  entity_7 = NULL;
  entity_2 = (char*)malloc(19*sizeof(char));
  entity_2[19-1]='';
  entity_8 = (char*)malloc(62*sizeof(char));
  entity_8[62-1]='';
  memset(entity_7, 'd', entity_5-1);
  entity_7[entity_5-1]='';
  memcpy(entity_8, entity_7, entity_5*sizeof(char));
}