void fun()
{
  int entity_9 = 97;
  char entity_5 = 'F';
  char* entity_0;
  char entity_7[25] = "";
  entity_7 = NULL;
  char entity_3 = 'Z';
  entity_0 = (char*)malloc(78*sizeof(char));
  entity_0[78-1]='';
  memset(entity_7, 'r', 25-1);
  entity_7[25-1]='';
  memcpy(entity_0, entity_7, 25*sizeof(char));
}