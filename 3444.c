void fun()
{
  int entity_8 = 6;
  int entity_0 = 32;
  char entity_2[entity_0] = "";
  entity_2 = NULL;
  char* entity_5;
  char* entity_3;
  memset(entity_2, 'T', entity_0-1);
  entity_2[entity_0-1]='';
  entity_3 = (char*)malloc(70*sizeof(char));
  entity_3[70-1]='';
  entity_5 = (char*)malloc(83*sizeof(char));
  entity_5[83-1]='';
  entity_0 = 79;
  strcpy(entity_3, entity_2);
}