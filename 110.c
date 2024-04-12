void fun()
{
  int entity_1 = 2;
  char* entity_3;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  memset(entity_7, 's', entity_1-1);
  entity_7[entity_1-1]='';
  entity_3 = (char*)malloc(44*sizeof(char));
  entity_3[44-1]='';
  memcpy(entity_3, entity_7, entity_1*sizeof(char));
}