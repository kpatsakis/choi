void fun()
{
  int entity_1 = 52;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  char* entity_3;
  memset(entity_7, 'Q', entity_1-1);
  entity_7[entity_1-1]='';
  entity_3 = (char*)malloc(70*sizeof(char));
  entity_3[70-1]='';
  memcpy(entity_3, entity_7, entity_1*sizeof(char));
}