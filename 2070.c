void fun()
{
  char entity_7[82] = "";
  entity_7 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(59*sizeof(char));
  entity_2[59-1]='';
  memset(entity_7, 'f', 82-1);
  entity_7[82-1]='';
  memcpy(entity_2, entity_7, 82*sizeof(char));
}