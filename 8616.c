void fun()
{
  int entity_8 = 80;
  entity_8 = 80;
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  char* entity_7;
  char* entity_5;
  entity_7 = (char*)malloc(26*sizeof(char));
  entity_7[26-1]='';
  memset(entity_3, 'o', entity_8-1);
  entity_3[entity_8-1]='';
  entity_5 = (char*)malloc(100*sizeof(char));
  entity_5[100-1]='';
  strcpy(entity_5, entity_3);
}