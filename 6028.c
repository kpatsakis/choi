void fun()
{
  int entity_5 = 80;
  entity_5 = 9;
  char* entity_3;
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  memset(entity_8, 't', entity_5-1);
  entity_8[entity_5-1]='';
  entity_3 = (char*)malloc(70*sizeof(char));
  entity_3[70-1]='';
  entity_8[89] = 'r';
}