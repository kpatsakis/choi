void fun()
{
  int entity_8 = 25;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(16*sizeof(char));
  entity_2[16-1]='';
  memset(entity_6, 't', entity_8-1);
  entity_6[entity_8-1]='';
  entity_8 = 61;
  memcpy(entity_2, entity_6, entity_8*sizeof(char));
}