void fun()
{
  int entity_8 = 100;
  entity_8 = 61;
  char entity_2[25] = "";
  entity_2 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(entity_8*sizeof(char));
  entity_4[entity_8-1]='';
  memset(entity_2, 'm', 25-1);
  entity_2[25-1]='';
  memcpy(entity_4, entity_2, 25*sizeof(char));
}