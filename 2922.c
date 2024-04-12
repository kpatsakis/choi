void fun()
{
  int entity_0 = 36;
  entity_0 = 44;
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(92*sizeof(char));
  entity_9[92-1]='';
  memset(entity_1, 'E', entity_0-1);
  entity_1[entity_0-1]='';
  entity_1[94] = 'b';
}