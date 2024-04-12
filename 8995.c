void fun()
{
  int entity_2 = 62;
  char* entity_8;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  entity_8 = (char*)malloc(70*sizeof(char));
  entity_8[70-1]='';
  memset(entity_7, 'w', entity_2-1);
  entity_7[entity_2-1]='';
  memcpy(entity_8, entity_7, entity_2*sizeof(char));
}