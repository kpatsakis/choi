void fun()
{
  int entity_1 = 82;
  char entity_4[92] = "";
  entity_4 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(92*sizeof(char));
  entity_0[92-1]='';
  memset(entity_4, 'u', 92-1);
  entity_4[92-1]='';
  entity_4[entity_1] = 'R';
}