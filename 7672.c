void fun()
{
  int entity_7 = 66;
  entity_7 = 100;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  char* entity_3;
  char* entity_2;
  memset(entity_5, 'U', entity_7-1);
  entity_5[entity_7-1]='';
  entity_2 = (char*)malloc(64*sizeof(char));
  entity_2[64-1]='';
  entity_3 = (char*)malloc(85*sizeof(char));
  entity_3[85-1]='';
  memcpy(entity_3, entity_5, entity_7*sizeof(char));
}