void fun()
{
  int entity_0 = 95;
  char entity_3[entity_0] = "";
  entity_3 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(78*sizeof(char));
  entity_5[78-1]='';
  memset(entity_3, 'o', entity_0-1);
  entity_3[entity_0-1]='';
  entity_3[52] = 'O';
}