void fun()
{
  int entity_5 = 83;
  char* entity_2;
  char entity_4[62] = "";
  entity_4 = NULL;
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[entity_5-1]='';
  memset(entity_4, 'c', 62-1);
  entity_4[62-1]='';
  memcpy(entity_2, entity_4, 62*sizeof(char));
}