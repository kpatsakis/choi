void fun()
{
  int entity_1 = 5;
  int entity_8 = 32;
  char* entity_7;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  entity_7 = (char*)malloc(94*sizeof(char));
  entity_7[94-1]='';
  memset(entity_2, 'f', entity_1-1);
  entity_2[entity_1-1]='';
  memcpy(entity_7, entity_2, entity_1*sizeof(char));
}