void fun()
{
  char* entity_1;
  char entity_6 = 'w';
  char entity_4 = 'r';
  char entity_7[97] = "";
  entity_7 = NULL;
  entity_1 = (char*)malloc(34*sizeof(char));
  entity_1[34-1]='';
  memset(entity_7, 't', 97-1);
  entity_7[97-1]='';
  memcpy(entity_1, entity_7, 97*sizeof(char));
}