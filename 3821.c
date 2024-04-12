void fun()
{
  int entity_2 = 12;
  entity_2 = 97;
  char entity_1 = 'h';
  char entity_7[93] = "";
  entity_7 = NULL;
  char* entity_4;
  memset(entity_7, 'j', 93-1);
  entity_7[93-1]='';
  entity_4 = (char*)malloc(48*sizeof(char));
  entity_4[48-1]='';
  entity_7[entity_2] = 'D';
}